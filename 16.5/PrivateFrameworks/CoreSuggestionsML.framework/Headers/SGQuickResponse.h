// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGQUICKRESPONSE_H
#define SGQUICKRESPONSE_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface SGQuickResponse : NSObject

@property (readonly, nonatomic) NSUInteger categoryId; // ivar: _categoryId
@property (readonly, nonatomic) BOOL isConfident; // ivar: _isConfident
@property (readonly, nonatomic) BOOL isCustomResponse; // ivar: _isCustomResponse
@property (readonly, nonatomic) BOOL isRobotResponse; // ivar: _isRobotResponse
@property (readonly, copy, nonatomic) NSString *lang; // ivar: _lang
@property (readonly, nonatomic) NSUInteger modelId; // ivar: _modelId
@property (readonly, nonatomic) NSDictionary *proactiveTrigger; // ivar: _proactiveTrigger
@property (readonly, nonatomic) NSUInteger replyTextId; // ivar: _replyTextId
@property (readonly, nonatomic) NSUInteger semanticClassId; // ivar: _semanticClassId
@property (readonly, nonatomic) NSUInteger styleGroupId; // ivar: _styleGroupId
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


-(id)description;
-(id)initWithProactiveTrigger:(id)arg0 isConfident:(BOOL)arg1 ;
-(id)initWithText:(id)arg0 lang:(id)arg1 replyTextId:(NSUInteger)arg2 styleGroupId:(NSUInteger)arg3 semanticClassId:(NSUInteger)arg4 modelId:(NSUInteger)arg5 categoryId:(NSUInteger)arg6 isCustomResponse:(BOOL)arg7 isRobotResponse:(BOOL)arg8 isConfident:(BOOL)arg9 ;
-(id)initWithText:(id)arg0 lang:(id)arg1 replyTextId:(NSUInteger)arg2 styleGroupId:(NSUInteger)arg3 semanticClassId:(NSUInteger)arg4 modelId:(NSUInteger)arg5 categoryId:(NSUInteger)arg6 isCustomResponse:(BOOL)arg7 isRobotResponse:(BOOL)arg8 isConfident:(BOOL)arg9 proactiveTrigger:(id)arg10 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASTCONTROLCOMMAND_H
#define ASTCONTROLCOMMAND_H

@class NSMutableDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ASTControlCommand : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSMutableDictionary *actionStorage; // ivar: _actionStorage
@property (nonatomic) BOOL forceSequential; // ivar: _forceSequential
@property (nonatomic) BOOL haltOnError; // ivar: _haltOnError


+(BOOL)supportsSecureCoding;
-(BOOL)allActionsFinished;
-(BOOL)reset;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)requestData;
-(id)requestWithData:(id)arg0 session:(id)arg1 queue:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performActionsWithSession:(id)arg0 queue:(id)arg1 ;
-(void)updateAction:(id)arg0 ;


@end


#endif
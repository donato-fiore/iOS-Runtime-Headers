// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PLDESCRIPTIONSTYLE_H
#define _PLDESCRIPTIONSTYLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _PLDescriptionStyle : NSObject

@property (readonly) NSInteger extraIndent; // ivar: _extraIndent
@property (readonly, copy) NSString *fieldSeparator; // ivar: _fieldSeparator
@property (readonly, copy) NSString *initialFieldSeparator; // ivar: _initialFieldSeparator
@property (readonly, copy) NSString *nameValueSeparator; // ivar: _nameValueSeparator
@property (readonly) BOOL prettyPrint; // ivar: _prettyPrint
@property (readonly, copy) NSString *suffix; // ivar: _suffix


+(id)styleForEnum:(NSInteger)arg0 ;
-(id)descriptionForObject:(id)arg0 withIndent:(NSInteger)arg1 ;
-(id)initWithIntialFieldSeparator:(id)arg0 fieldSeparator:(id)arg1 nameValueSeparator:(id)arg2 suffix:(id)arg3 extraIndent:(NSInteger)arg4 prettyPrint:(BOOL)arg5 ;


@end


#endif
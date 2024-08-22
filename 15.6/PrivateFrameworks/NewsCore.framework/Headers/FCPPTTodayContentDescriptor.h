// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPPTTODAYCONTENTDESCRIPTOR_H
#define FCPPTTODAYCONTENTDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCPPTTodayContentDescriptor : NSObject

@property (readonly, nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, nonatomic) NSString *forYouConfigID; // ivar: _forYouConfigID
@property (readonly, nonatomic) NSString *tagID; // ivar: _tagID


+(id)descriptorWithForYouConfigID:(id)arg0 ;
+(id)descriptorWithForYouConfigID:(id)arg0 tagID:(id)arg1 ;
+(id)descriptorWithTagID:(id)arg0 ;
-(id)_initWithForYouConfigID:(id)arg0 tagID:(id)arg1 ;
-(id)_initWithTagID:(id)arg0 ;


@end


#endif
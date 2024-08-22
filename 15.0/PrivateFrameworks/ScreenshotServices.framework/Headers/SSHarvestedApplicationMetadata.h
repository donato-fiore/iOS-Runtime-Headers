// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSHARVESTEDAPPLICATIONMETADATA_H
#define SSHARVESTEDAPPLICATIONMETADATA_H

@class NSArray, NSString, NSURL;
@protocol BSXPCCoding, SSLoggable;

#import <Foundation/Foundation.h>


@interface SSHarvestedApplicationMetadata : NSObject <BSXPCCoding, SSLoggable>



@property (nonatomic) BOOL canGenerateDocument; // ivar: _canGenerateDocument
@property (copy, nonatomic) NSArray *contentRects; // ivar: _contentRects
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *loggableDescription;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *userActivityTitle; // ivar: _userActivityTitle
@property (copy, nonatomic) NSURL *userActivityURL; // ivar: _userActivityURL


-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif
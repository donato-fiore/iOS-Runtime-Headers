// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSHARVESTEDAPPLICATIONMETADATA_H
#define SSHARVESTEDAPPLICATIONMETADATA_H

@class NSString, NSArray, NSData, NSURL;
@protocol BSXPCCoding, SSLoggable;

#import <Foundation/Foundation.h>


@interface SSHarvestedApplicationMetadata : NSObject <BSXPCCoding, SSLoggable>



@property (copy, nonatomic) NSString *appLanguage; // ivar: _appLanguage
@property (nonatomic) BOOL canGenerateDocument; // ivar: _canGenerateDocument
@property (copy, nonatomic) NSArray *contentRects; // ivar: _contentRects
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int interfaceOrientation; // ivar: _interfaceOrientation
@property (copy, nonatomic) NSData *jsonEncodedStringsInformation; // ivar: _jsonEncodedStringsInformation
@property (readonly, nonatomic) NSString *loggableDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *userActivityTitle; // ivar: _userActivityTitle
@property (copy, nonatomic) NSURL *userActivityURL; // ivar: _userActivityURL


-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif
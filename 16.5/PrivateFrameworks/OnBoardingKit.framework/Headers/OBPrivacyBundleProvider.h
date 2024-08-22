// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBPRIVACYBUNDLEPROVIDER_H
#define OBPRIVACYBUNDLEPROVIDER_H

@class NSString;
@protocol OBPrivacyBundleProvider;

#import <Foundation/Foundation.h>


@interface OBPrivacyBundleProvider : NSObject <OBPrivacyBundleProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *enclosingBundleIdentifier; // ivar: _enclosingBundleIdentifier
@property (readonly) NSUInteger hash;
@property (readonly) NSString *path;
@property (copy) NSString *privacyBundleName; // ivar: _privacyBundleName
@property (readonly) Class superclass;


-(id)_bundleRecordWithError:(*id)arg0 ;
-(id)initWithEnclosingBundleIdentifier:(id)arg0 privacyBundleName:(id)arg1 ;


@end


#endif
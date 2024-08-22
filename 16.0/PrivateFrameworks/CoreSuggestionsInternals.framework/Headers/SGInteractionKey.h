// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGINTERACTIONKEY_H
#define SGINTERACTIONKEY_H

@class NSString;


#import "SGMessageKey.h"

@interface SGInteractionKey : SGMessageKey

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *personHandle;


+(BOOL)isSupportedEntityType:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBundleId:(id)arg0 personHandle:(id)arg1 ;
-(id)initWithSource:(id)arg0 uniqueIdentifier:(id)arg1 ;


@end


#endif
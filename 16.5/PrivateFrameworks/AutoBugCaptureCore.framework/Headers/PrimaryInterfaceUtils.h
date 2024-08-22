// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRIMARYINTERFACEUTILS_H
#define PRIMARYINTERFACEUTILS_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface PrimaryInterfaceUtils : NSObject

@property (readonly, nonatomic) NSDate *estimatedInterfaceBecamePrimaryDate; // ivar: _estimatedInterfaceBecamePrimaryDate
@property (readonly, nonatomic) BOOL hasPrimaryInterface; // ivar: _hasPrimaryInterface
@property (readonly, nonatomic) NSDate *interfaceBecamePrimaryDate; // ivar: _interfaceBecamePrimaryDate
@property (readonly, nonatomic) NSInteger primaryInterfaceType; // ivar: _primaryInterfaceType
@property (readonly, nonatomic) NSString *primaryInterfaceTypeString;


+(id)sharedInstance;
-(id)init;
-(void)getDefaultPathInfoUsingSecondsSinceChange;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif
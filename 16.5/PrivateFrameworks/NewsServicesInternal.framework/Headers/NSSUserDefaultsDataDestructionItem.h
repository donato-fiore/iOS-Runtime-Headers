// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSUSERDEFAULTSDATADESTRUCTIONITEM_H
#define NSSUSERDEFAULTSDATADESTRUCTIONITEM_H

@class NSString, NSSet, NSUserDefaults;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSSUserDefaultsDataDestructionItem : NSObject <NSCopying>



@property (copy, nonatomic) NSString *domainName; // ivar: _domainName
@property (copy, nonatomic) NSSet *stickyKeys; // ivar: _stickyKeys
@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithUserDefaults:(id)arg0 domainName:(id)arg1 stickyKeys:(id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBCONTAINER_H
#define MBCONTAINER_H

@class NSMutableDictionary, NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MBContainer : NSObject <NSCopying>

 {
    NSMutableDictionary *_plist;
}


@property (retain, nonatomic) NSString *containerDir;
@property (readonly, nonatomic) int containerType;
@property (readonly, nonatomic) NSString *containerTypeString;
@property (retain, nonatomic) NSDate *datePlacedInSafeHarbor;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isSystemContainer;
@property (readonly, nonatomic) BOOL isSystemSharedContainer;
@property (readonly, nonatomic, getter=isSafeHarbor) BOOL safeHarbor;
@property (readonly, nonatomic) NSString *safeHarborDir;


+(id)containerWithDomainName:(id)arg0 ;
+(id)containerWithPropertyList:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)domain;
-(id)initWithPropertyList:(id)arg0 ;
-(id)propertyListForBackupProperties;
-(id)propertyListForSafeHarborInfo;
-(void)dealloc;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAREGIONINFO_H
#define AAREGIONINFO_H

@class NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AARegionInfo : NSObject <NSCopying>

 {
    NSDictionary *_regionInfoDictionary;
}


@property (readonly, nonatomic) NSString *displayedHostname;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif
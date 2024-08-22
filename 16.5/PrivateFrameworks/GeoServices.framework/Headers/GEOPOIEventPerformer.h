// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPOIEVENTPERFORMER_H
#define GEOPOIEVENTPERFORMER_H

@class NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOPOIEventPerformer : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *iTunesIdentifier; // ivar: _iTunesIdentifier
@property (retain, nonatomic) NSURL *iTunesURL; // ivar: _iTunesURL
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName


+(BOOL)supportsSecureCoding;
+(id)poiEventPerformersForPerformers:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPerformer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
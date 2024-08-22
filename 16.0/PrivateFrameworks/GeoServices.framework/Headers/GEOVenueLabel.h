// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOVENUELABEL_H
#define GEOVENUELABEL_H

@class NSString;
@protocol GEOVenueLabel;

#import <Foundation/Foundation.h>


@interface GEOVenueLabel : NSObject <GEOVenueLabel>



@property (readonly, nonatomic) NSString *detail; // ivar: _detail
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *shortName; // ivar: _shortName


-(id)init;
-(id)initWithLabel:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 shortName:(id)arg1 detail:(id)arg2 ;


@end


#endif
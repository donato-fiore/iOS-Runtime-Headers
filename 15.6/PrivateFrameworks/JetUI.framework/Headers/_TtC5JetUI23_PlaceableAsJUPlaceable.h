// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC5JETUI23_PLACEABLEASJUPLACEABLE_H
#define _TTC5JETUI23_PLACEABLEASJUPLACEABLE_H

@class NSString;
@protocol JUPlaceable;

#import <Foundation/Foundation.h>


@interface _TtC5JetUI23_PlaceableAsJUPlaceable : NSObject <JUPlaceable>

 {
    ? base;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;
-(struct JUMeasurements )measureToFit:(struct CGSize )arg0 withTraitCollection:(id)arg1 ;
-(void)placeAtRect:(struct CGRect )arg0 withTraitCollection:(id)arg1 ;


@end


#endif
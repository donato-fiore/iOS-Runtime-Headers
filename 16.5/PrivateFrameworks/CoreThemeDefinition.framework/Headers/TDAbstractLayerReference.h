// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDABSTRACTLAYERREFERENCE_H
#define TDABSTRACTLAYERREFERENCE_H

@class NSManagedObject, NSNumber, NSString;



@interface TDAbstractLayerReference : NSManagedObject {
    CGRect _frameRect;
}


@property (retain, nonatomic) NSNumber *blendMode;
@property (nonatomic) CGRect frameRect;
@property (retain, nonatomic) NSString *frameRectString;
@property (nonatomic) BOOL makeOpaqueIfPossible;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *opacity;
@property (nonatomic) CGRect primitiveFrameRect;


-(void)awakeFromFetch;


@end


#endif
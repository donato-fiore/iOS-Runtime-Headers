// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ESPRESSODCNESPRESSOOVERFEATDETECTOR_H
#define ESPRESSODCNESPRESSOOVERFEATDETECTOR_H


#import <Foundation/Foundation.h>

#import "EspressoFDOverfeatNetwork.h"

@interface EspressoDCNEspressoOverfeatDetector : NSObject {
    int tileSizeScaleFactor;
    int tileDimension;
    int localFaceMerging;
    *void face_list;
}


@property (nonatomic) CGFloat confidenceThreshold; // ivar: _confidenceThreshold
@property (retain, nonatomic) EspressoFDOverfeatNetwork *enet; // ivar: _enet
@property (nonatomic) CGFloat minBoundingBoxThreshold; // ivar: _minBoundingBoxThreshold


-(?)computeBBoxUsingProb:(?)arg0 box:(?)arg1 andScalefactor:(?)arg2 padXpadY;
-(CGFloat)compareObject:(id)arg0 withObject:(id)arg1 error:(*id)arg2 ;
-(id)getDescription;
-(id)getFacesFromNetworkResultOriginalWidth:(float)arg0 originalHeight:(float)arg1 ;
-(id)init;
-(id)initWithNetwork:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(void)commonInit;
-(void)dealloc;
-(void)fillFaceList;
-(void)mergeFaceList;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DARRAY2DRESOURCES_H
#define TSCH3DARRAY2DRESOURCES_H



#import "TSCH3DMutable2DResources.h"
#import "TSCH3DArray2D.h"

@interface TSCH3DArray2DResources : TSCH3DMutable2DResources {
    TSCH3DArray2D *_resources;
}




+(id)_resources;
+(id)resourcesWithResource:(id)arg0 ;
+(id)resourcesWithSize:(*void)arg0 ;
-(BOOL)hasResourceAtIndex:(*void)arg0 ;
-(id)firstResource;
-(id)initWithSize:(*void)arg0 ;
-(id)resourceAtIndex:(*void)arg0 ;
-(struct tvec2<int> )size;
-(void)resize:(*void)arg0 ;
-(void)setResource:(id)arg0 atIndex:(*void)arg1 ;


@end


#endif
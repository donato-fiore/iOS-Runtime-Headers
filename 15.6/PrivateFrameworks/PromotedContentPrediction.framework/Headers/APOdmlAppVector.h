// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APODMLAPPVECTOR_H
#define APODMLAPPVECTOR_H



#import "APOdmlVector.h"

@interface APOdmlAppVector : APOdmlVector

@property (readonly, nonatomic) NSUInteger adamID; // ivar: _adamID


-(id)data;
-(id)description;
-(id)initWithString:(id)arg0 version:(id)arg1 ;
-(id)initWithVersion:(id)arg0 header:(struct APOdmlAppVectorHeader *)arg1 floats:(*float)arg2 ;


@end


#endif
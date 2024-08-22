// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPVIEWSTATEMETADATA_H
#define TSPVIEWSTATEMETADATA_H



#import "TSPObject.h"

@interface TSPViewStateMetadata : TSPObject {
    ViewStateMetadata _message;
}




-(*void)message;
-(NSInteger)tsp_identifier;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif
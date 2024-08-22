// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPNAMECOMPONENTSDATA_H
#define NPNAMECOMPONENTSDATA_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface NPNameComponentsData : NSObject {
    NSDictionary *_nameComponents;
}




-(BOOL)collectionForEntry:(NSUInteger)arg0 contains:(id)arg1 ;
-(id)_keyForDataEntry:(NSUInteger)arg0 ;
-(id)init;
-(id)objectValueForEntry:(NSUInteger)arg0 ;


@end


#endif
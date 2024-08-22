// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONSNUMBERTOSTRINGMAP_H
#define HKMEDICATIONSNUMBERTOSTRINGMAP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HKMedicationsNumberToStringMap : NSObject {
    NSMutableDictionary *_storage;
}




-(NSInteger)count;
-(id)init;
-(id)stringForKey:(NSInteger)arg0 ;
-(void)setString:(id)arg0 forKey:(NSInteger)arg1 ;


@end


#endif
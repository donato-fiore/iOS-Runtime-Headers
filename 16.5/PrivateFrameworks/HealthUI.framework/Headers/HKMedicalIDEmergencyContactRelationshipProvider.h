// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICALIDEMERGENCYCONTACTRELATIONSHIPPROVIDER_H
#define HKMEDICALIDEMERGENCYCONTACTRELATIONSHIPPROVIDER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HKMedicalIDEmergencyContactRelationshipProvider : NSObject {
    NSArray *_tokens;
}




-(NSInteger)numberOfRowsForRelationships;
-(id)init;
-(id)keyForRelationshipAtIndex:(NSInteger)arg0 ;
-(id)localizedRelationshipAtIndex:(NSInteger)arg0 ;


@end


#endif
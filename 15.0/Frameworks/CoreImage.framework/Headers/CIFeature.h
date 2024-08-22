// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIFEATURE_H
#define CIFEATURE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CIFeature : NSObject

@property (readonly) CGRect bounds;
@property (readonly, retain) NSString *type;


-(id)debugDescription;
-(id)init;


@end


#endif
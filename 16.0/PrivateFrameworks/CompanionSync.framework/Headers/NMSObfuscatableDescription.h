// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSOBFUSCATABLEDESCRIPTION_H
#define NMSOBFUSCATABLEDESCRIPTION_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface NMSObfuscatableDescription : NSObject

@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (retain, nonatomic) NSString *prefixString; // ivar: _prefixString


-(id)CPSafeDescription;
-(id)_descriptionObfuscated:(BOOL)arg0 ;
-(id)description;
-(id)init;
-(void)addDescription:(id)arg0 value:(id)arg1 ;
-(void)addObfuscatedDescription:(id)arg0 value:(id)arg1 ;


@end


#endif
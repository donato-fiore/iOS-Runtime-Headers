// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSNUMBERINGSYSTEM_H
#define NSNUMBERINGSYSTEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NSNumberingSystem : NSObject

@property (copy) NSString *descriptor; // ivar: _descriptor
@property (copy) NSString *identifier; // ivar: _identifier
@property BOOL isAlgorithmic; // ivar: _isAlgorithmic
@property NSInteger radix; // ivar: _radix


+(id)numberingSystemWithNumberingSystemName:(char *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithIdentifier:(id)arg0 isAlgorithmic:(BOOL)arg1 radix:(NSInteger)arg2 descriptor:(id)arg3 ;
-(id)initWithLocaleIdentifier:(id)arg0 ;
-(id)initWithNumberingSystemIdentifier:(id)arg0 ;


@end


#endif
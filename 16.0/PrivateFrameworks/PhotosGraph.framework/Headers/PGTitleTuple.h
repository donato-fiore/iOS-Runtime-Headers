// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGTITLETUPLE_H
#define PGTITLETUPLE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PGTitle.h"

@interface PGTitleTuple : NSObject

@property (readonly, nonatomic) NSArray *locationNames; // ivar: _locationNames
@property (readonly, nonatomic) PGTitle *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) PGTitle *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithWithTitle:(id)arg0 subtitle:(id)arg1 ;
-(id)initWithWithTitle:(id)arg0 subtitle:(id)arg1 locationNames:(id)arg2 ;


@end


#endif
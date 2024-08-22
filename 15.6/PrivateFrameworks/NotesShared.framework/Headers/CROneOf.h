// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRONEOF_H
#define CRONEOF_H

@class NSString, NSMapTable;
@protocol CRDataType;

#import <Foundation/Foundation.h>

#import "CRSet.h"

@interface CROneOf : NSObject <CRDataType>



@property (weak, nonatomic) id *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CRSet *set; // ivar: _set
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMapTable *timestamps; // ivar: _timestamps


-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)init;
-(id)initWithCRCoder:(id)arg0 ;
-(id)timestampForNewItem;
-(id)tombstone;
-(void)addItem:(id)arg0 ;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)mergeWith:(id)arg0 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)setDocument:(id)arg0 ;
-(void)setUpdated:(id)arg0 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif
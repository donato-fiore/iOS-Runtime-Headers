// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FINANCEKIT17MANAGEDORDERIMAGE_H
#define _TTC10FINANCEKIT17MANAGEDORDERIMAGE_H

@class NSManagedObject, NSData, NSString;


#import "_TtC10FinanceKit13StorableColor.h"

@interface _TtC10FinanceKit17ManagedOrderImage : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic) int height;
@property (nonatomic, copy) NSString *localizationName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) _TtC10FinanceKit13StorableColor *storedBackgroundColor;
@property (nonatomic) int width;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif
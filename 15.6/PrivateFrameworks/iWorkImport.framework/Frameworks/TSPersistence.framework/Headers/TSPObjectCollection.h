// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPOBJECTCOLLECTION_H
#define TSPOBJECTCOLLECTION_H

@class NSArray;


#import "TSPObject.h"

@interface TSPObjectCollection : TSPObject

@property (readonly, nonatomic) NSArray *objects; // ivar: _objects


+(BOOL)tsp_isInternalObjectContainerClass;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 objects:(id)arg1 ;
-(id)tsp_publicLoggingDescription;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif
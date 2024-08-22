// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPOBJECTCONTAINER_H
#define TSPOBJECTCONTAINER_H

@class NSArray;


#import "TSPObject.h"

@interface TSPObjectContainer : TSPObject {
    unsigned char _packageIdentifier;
}


@property (readonly, nonatomic) NSArray *childObjects; // ivar: _childObjects


+(BOOL)tsp_isInternalObjectContainerClass;
+(NSInteger)objectIdentifierForPackageIdentifier:(unsigned char)arg0 ;
-(BOOL)shouldDelayArchiving;
-(NSInteger)tsp_identifier;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 packageIdentifier:(unsigned char)arg1 ;
-(id)packageLocator;
-(unsigned char)componentRequiredPackageIdentifier;
-(unsigned int)delayedArchivingPriority;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)prepareForComponentWriteWithDelayedObjects:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif
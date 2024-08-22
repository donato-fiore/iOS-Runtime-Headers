// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDPROPERTY_H
#define TDPROPERTY_H

@class NSManagedObject, NSString;



@interface TDProperty : NSManagedObject {
    NSString *_name;
}


@property (copy, nonatomic) NSString *name;


-(void)addToDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif
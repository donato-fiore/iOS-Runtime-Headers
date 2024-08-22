// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKJSMANAGEDARRAY_H
#define IKJSMANAGEDARRAY_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface IKJSManagedArray : NSObject

@property (retain, nonatomic) NSArray *managedArray; // ivar: _managedArray
@property (retain, nonatomic) id *ownerObject; // ivar: _ownerObject


-(id)initWithArray:(id)arg0 ownerObject:(id)arg1 ;
-(id)jsValuesWithContext:(id)arg0 ;
-(void)dealloc;


@end


#endif
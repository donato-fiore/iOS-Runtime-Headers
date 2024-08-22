// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFRECORDPROPERTY_H
#define WFRECORDPROPERTY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFRecordProperty : NSObject

@property (readonly, nonatomic, getter=isDynamic) BOOL dynamic; // ivar: _dynamic
@property (readonly, nonatomic) NSString *getter; // ivar: _getter
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isNonAtomic) BOOL nonAtomic; // ivar: _nonAtomic
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly; // ivar: _readOnly
@property (readonly, nonatomic) NSString *setter; // ivar: _setter


-(id)initWithName:(id)arg0 property:(struct objc_property *)arg1 ;


@end


#endif
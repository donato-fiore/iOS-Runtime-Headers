// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPFIELDWRAPPER_H
#define HAPFIELDWRAPPER_H

@class HMFObject, NSString;



@interface HAPFieldWrapper : HMFObject

@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger tlvid; // ivar: _tlvid


-(id)initWithTlvId:(NSUInteger)arg0 name:(id)arg1 ;


@end


#endif
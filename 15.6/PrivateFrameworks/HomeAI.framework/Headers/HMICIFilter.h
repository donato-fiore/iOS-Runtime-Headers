// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMICIFILTER_H
#define HMICIFILTER_H

@class HMFObject, NSArray, NSString;



@interface HMICIFilter : HMFObject

@property (readonly) NSArray *attributes; // ivar: _attributes
@property (readonly) NSString *name; // ivar: _name
@property (readonly) CGFloat probability; // ivar: _probability


-(id)applyToImage:(id)arg0 withProbability:(CGFloat)arg1 ;
-(id)attributeForKey:(id)arg0 ;
-(id)expectedAttributeForKey:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPREADERREFERENCEINFO_H
#define TSPREADERREFERENCEINFO_H


#import <Foundation/Foundation.h>


@interface TSPReaderReferenceInfo : NSObject

@property (readonly, nonatomic) NSInteger componentIdentifier; // ivar: _componentIdentifier
@property (readonly, nonatomic) NSInteger objectIdentifier; // ivar: _objectIdentifier


+(id)newReferenceInfoWithObjectIdentifier:(NSInteger)arg0 componentIdentifier:(NSInteger)arg1 ;
-(id)init;
-(id)initWithObjectIdentifier:(NSInteger)arg0 componentIdentifier:(NSInteger)arg1 ;


@end


#endif
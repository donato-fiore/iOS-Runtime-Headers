// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCROIOELEMENT_H
#define SCROIOELEMENT_H

@class NSString;
@protocol SCROIOElementProtocol, NSCopying;

#import <Foundation/Foundation.h>


@interface SCROIOElement : NSObject <SCROIOElementProtocol, NSCopying>

 {
    unsigned int _ioObject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIOObject:(unsigned int)arg0 ;
-(int)transport;
-(unsigned int)ioObject;
-(void)dealloc;


@end


#endif
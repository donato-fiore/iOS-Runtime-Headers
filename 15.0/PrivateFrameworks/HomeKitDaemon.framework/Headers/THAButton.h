// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef THABUTTON_H
#define THABUTTON_H


#import <Foundation/Foundation.h>


@interface THAButton : NSObject

@property (nonatomic) unsigned char identifier; // ivar: _identifier
@property (nonatomic) NSUInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 identifier:(unsigned char)arg1 ;


@end


#endif
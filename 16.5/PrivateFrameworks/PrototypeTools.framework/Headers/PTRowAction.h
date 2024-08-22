// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTROWACTION_H
#define PTROWACTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PTRowAction : NSObject <NSSecureCoding>

 {
    id *_handler;
}


@property (readonly, nonatomic) id *handler;
@property (nonatomic) BOOL isEncodable; // ivar: _isEncodable


+(BOOL)supportsSecureCoding;
+(id)actionWithHandler:(id)arg0 ;
-(BOOL)deselectsRowOnSuccess;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)defaultHandler:(SEL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
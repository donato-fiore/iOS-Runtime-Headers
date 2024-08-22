// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSSIZEVECTOR_H
#define NSSSIZEVECTOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSSSizeVector : NSObject <NSSecureCoding>



@property (readonly) NSInteger docsAndData; // ivar: _docsAndData
@property (readonly) NSInteger dynamic;
@property (readonly) NSInteger fixed; // ivar: _fixed
@property (readonly) BOOL isZero;
@property (readonly) NSInteger purgeable; // ivar: _purgeable
@property (readonly) NSInteger userTotal;


+(BOOL)supportsSecureCoding;
+(id)docsAndData:(NSInteger)arg0 ;
+(id)docsAndData:(NSInteger)arg0 purgeable:(NSInteger)arg1 ;
+(id)fixed:(NSInteger)arg0 ;
+(id)fixed:(NSInteger)arg0 docsAndData:(NSInteger)arg1 ;
+(id)fixed:(NSInteger)arg0 docsAndData:(NSInteger)arg1 purgeable:(NSInteger)arg2 ;
+(id)fixed:(NSInteger)arg0 dynamic:(NSInteger)arg1 purgeable:(NSInteger)arg2 ;
+(id)fixed:(NSInteger)arg0 purgeable:(NSInteger)arg1 ;
+(id)purgeable:(NSInteger)arg0 ;
+(id)zero;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSizeVector:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFixed:(NSInteger)arg0 docsAndData:(NSInteger)arg1 purgeable:(NSInteger)arg2 ;
-(id)plus:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
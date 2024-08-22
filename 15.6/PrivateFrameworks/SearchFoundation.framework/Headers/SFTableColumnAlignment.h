// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFTABLECOLUMNALIGNMENT_H
#define SFTABLECOLUMNALIGNMENT_H

@class NSString, NSDictionary, NSData;
@protocol SFTableColumnAlignment, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFTableColumnAlignment : NSObject <SFTableColumnAlignment, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int columnAlignment; // ivar: _columnAlignment
@property (nonatomic) int dataAlignment; // ivar: _dataAlignment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isEqualWidth; // ivar: _isEqualWidth
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasColumnAlignment;
-(BOOL)hasDataAlignment;
-(BOOL)hasIsEqualWidth;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
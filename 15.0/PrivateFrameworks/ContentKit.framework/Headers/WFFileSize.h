// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFFILESIZE_H
#define WFFILESIZE_H

@class NSString;
@protocol NSSecureCoding, NSCopying, WFSerializableContent, WFNaming;

#import <Foundation/Foundation.h>


@interface WFFileSize : NSObject <NSSecureCoding, NSCopying, WFSerializableContent, WFNaming>



@property (readonly, nonatomic) NSInteger byteCount; // ivar: _byteCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *formattedString;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithByteCount:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
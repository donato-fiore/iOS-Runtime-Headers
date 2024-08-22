// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMCONTINUITYCAPTURECONTROL_H
#define CMCONTINUITYCAPTURECONTROL_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying, CMContinuityCaptureDictionaryRepresentable;

#import <Foundation/Foundation.h>


@interface CMContinuityCaptureControl : NSObject <NSSecureCoding, NSCopying, CMContinuityCaptureDictionaryRepresentable>

 {
    id *_value;
    NSString *_class;
}


@property (readonly, retain, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSInteger entity; // ivar: _entity
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ? minimumSupportedVersion; // ivar: _minimumSupportedVersion
@property (readonly, retain, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (retain) id *value;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithName:(id)arg0 attributes:(id)arg1 entity:(NSInteger)arg2 minimumSupportedVersion:(struct ? )arg3 value:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
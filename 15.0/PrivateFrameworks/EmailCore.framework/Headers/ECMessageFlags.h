// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ECMESSAGEFLAGS_H
#define ECMESSAGEFLAGS_H

@class NSString;
@protocol ECMessageFlagsBuilder, NSCopying, NSSecureCoding, EFPubliclyDescribable;

#import <Foundation/Foundation.h>


@interface ECMessageFlags : NSObject <ECMessageFlagsBuilder, NSCopying, NSSecureCoding, EFPubliclyDescribable>

 {
    ? _storage;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL draft;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (nonatomic) NSUInteger flagColor;
@property (nonatomic) BOOL flagged;
@property (nonatomic) BOOL forwarded;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger junkLevel;
@property (nonatomic) BOOL junkLevelSetByUser;
@property (nonatomic) BOOL read;
@property (nonatomic) BOOL redirected;
@property (nonatomic) BOOL replied;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)cachedFlagsWithHash:(NSUInteger)arg0 generator:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHash:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSMODERECORD_H
#define DNDSMODERECORD_H

@class NSString, NSUUID;
@protocol NSCopying, NSMutableCopying, DNDSBackingStoreRecord;

#import <Foundation/Foundation.h>


@interface DNDSModeRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *modeIdentifier; // ivar: _modeIdentifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger semanticType; // ivar: _semanticType
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *symbolImageName; // ivar: _symbolImageName
@property (readonly, copy, nonatomic) NSString *tintColorName; // ivar: _tintColorName
@property (readonly, nonatomic) NSUInteger visibility; // ivar: _visibility


+(id)migrateDictionaryRepresentation:(id)arg0 fromVersionNumber:(NSUInteger)arg1 toVersionNumber:(NSUInteger)arg2 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)_initWithSymbolImageName:(id)arg0 tintColorName:(id)arg1 name:(id)arg2 modeIdentifier:(id)arg3 semanticType:(NSInteger)arg4 visibility:(NSUInteger)arg5 identifier:(id)arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INDEFERREDLOCALIZEDSTRING_H
#define INDEFERREDLOCALIZEDSTRING_H

@class NSString, NSArray, NSURL;



@interface INDeferredLocalizedString : NSString

@property (readonly, copy, nonatomic) NSArray *_arguments; // ivar: _arguments
@property (readonly, copy, nonatomic) NSString *_bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSURL *_bundleURL; // ivar: _bundleURL
@property (readonly, copy, nonatomic) NSString *_cachedLocalization; // ivar: _cachedLocalization
@property (readonly, copy, nonatomic) NSString *_formatKey; // ivar: _formatKey
@property (readonly, copy, nonatomic) NSString *_table; // ivar: _table


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(Class)classForCoder;
-(Class)classForKeyedArchiver;
-(NSUInteger)length;
-(id)_intents_encodeForProto;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeferredFormat:(id)arg0 fromTable:(id)arg1 bundle:(id)arg2 arguments:(char *)arg3 ;
-(id)initWithDeferredFormat:(id)arg0 fromTable:(id)arg1 bundleIdentifier:(id)arg2 bundleURL:(id)arg3 arguments:(id)arg4 ;
-(id)localizeForLanguage:(id)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif
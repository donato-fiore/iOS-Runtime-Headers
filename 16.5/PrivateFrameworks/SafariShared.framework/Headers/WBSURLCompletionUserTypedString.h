// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSURLCOMPLETIONUSERTYPEDSTRING_H
#define WBSURLCOMPLETIONUSERTYPEDSTRING_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSURLCompletionUserTypedString : NSObject <NSSecureCoding>

 {
    *unsigned short _unichars;
    char * _chars;
    int _length;
    BOOL _containsAnySpaces;
    BOOL _ownsUnichars;
    BOOL _ownsChars;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSArray *components; // ivar: _components
@property (readonly, nonatomic) NSString *normalizedString; // ivar: _string
@property (readonly, nonatomic) NSString *searchQueryParameterString; // ivar: _searchQueryParameterString
@property (readonly, nonatomic) NSString *stringWithoutWhitespace; // ivar: _stringWithoutWhitespace


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
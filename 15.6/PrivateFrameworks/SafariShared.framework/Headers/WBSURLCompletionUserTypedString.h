// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSURLCOMPLETIONUSERTYPEDSTRING_H
#define WBSURLCOMPLETIONUSERTYPEDSTRING_H

@class NSString;
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
}


@property (readonly, nonatomic) NSString *normalizedString; // ivar: _string


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
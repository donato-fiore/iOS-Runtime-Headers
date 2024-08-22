// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USOSERIALIZEDUTTERANCESPAN_H
#define USOSERIALIZEDUTTERANCESPAN_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface USOSerializedUtteranceSpan : NSObject <NSSecureCoding>



@property (readonly) unsigned int endIndex; // ivar: _endIndex
@property (readonly) int endMilliSeconds; // ivar: _endMilliSeconds
@property (readonly) unsigned int endUnicodeScalarIndex; // ivar: _endUnicodeScalarIndex
@property (readonly) unsigned int startIndex; // ivar: _startIndex
@property (readonly) int startMilliSeconds; // ivar: _startMilliSeconds
@property (readonly) unsigned int startUnicodeScalarIndex; // ivar: _startUnicodeScalarIndex


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartIndex:(unsigned int)arg0 endIndex:(unsigned int)arg1 startUnicodeScalarIndex:(unsigned int)arg2 endUnicodeScalarIndex:(unsigned int)arg3 ;
-(id)initWithStartIndex:(unsigned int)arg0 endIndex:(unsigned int)arg1 startUnicodeScalarIndex:(unsigned int)arg2 endUnicodeScalarIndex:(unsigned int)arg3 startMilliSeconds:(int)arg4 endMilliSeconds:(int)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
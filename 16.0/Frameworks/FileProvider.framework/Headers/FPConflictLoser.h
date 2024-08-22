// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPCONFLICTLOSER_H
#define FPCONFLICTLOSER_H

@class NSString, NSPersonNameComponents, NSDate, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSFileProviderItemVersion.h"

@interface FPConflictLoser : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, copy, nonatomic) NSPersonNameComponents *lastEditorNameComponents; // ivar: _lastEditorNameComponents
@property (readonly, copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url
@property (readonly, copy, nonatomic) NSFileProviderItemVersion *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVersion:(id)arg0 filename:(id)arg1 url:(id)arg2 modificationDate:(id)arg3 lastEditorNameComponents:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
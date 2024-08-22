// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLURLEXTENSIONPREVIEW_H
#define QLURLEXTENSIONPREVIEW_H

@class NSArray, UTType, QLURLHandler;


#import "QLExtensionPreview.h"

@interface QLURLExtensionPreview : QLExtensionPreview

@property (retain) NSArray *additionalURLsAccessed; // ivar: _additionalURLsAccessed
@property (retain) UTType *contentType; // ivar: _contentType
@property (retain) QLURLHandler *urlHandler; // ivar: _urlHandler


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 contentType:(id)arg1 ;
-(id)initWithURLHandler:(id)arg0 contentType:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateForExternalResourceAccessWithExtension:(id)arg0 context:(id)arg1 ;


@end


#endif
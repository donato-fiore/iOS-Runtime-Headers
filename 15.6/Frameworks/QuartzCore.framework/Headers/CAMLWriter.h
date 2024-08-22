// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMLWRITER_H
#define CAMLWRITER_H

@class NSURL;
@protocol CAMLWriterDelegate;

#import <Foundation/Foundation.h>


@interface CAMLWriter : NSObject {
    *_CAMLWriterPriv _priv;
}


@property (retain) NSURL *baseURL;
@property (weak) NSObject<CAMLWriterDelegate> *delegate;


+(id)writerWithData:(id)arg0 ;
-(id)URLStringForResource:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)_writeElementTree:(struct _CAMLWriterElement *)arg0 ;
-(void)beginElement:(unsigned int)arg0 ;
-(void)beginPropertyElement:(id)arg0 ;
-(void)dealloc;
-(void)encodeObject:(id)arg0 ;
-(void)encodeObject:(id)arg0 conditionally:(BOOL)arg1 ;
-(void)endElement;
-(void)setElementAttribute:(id)arg0 forKey:(id)arg1 ;
-(void)setElementContent:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSIINTARRAY_H
#define PSIINTARRAY_H


#import <Foundation/Foundation.h>


@interface PSIIntArray : NSObject {
    *sqlite3_intarray _elementArray;
    NSInteger _staticElementBuffer;
    *NSInteger _elementBuffer;
    NSUInteger _elementBufferSize;
    BOOL _freeOnUnprepare;
}


@property (readonly, nonatomic) *NSInteger elementBuffer;


-(id)initWithLabel:(id)arg0 database:(struct sqlite3 *)arg1 ;
-(void)_prepareForNumberOfElements:(NSUInteger)arg0 ;
-(void)_unprepare;
-(void)bindElements:(*NSInteger)arg0 numberOfElements:(NSUInteger)arg1 ;
-(void)bindElements:(struct __CFArray *)arg0 range:(struct _NSRange )arg1 ;
-(void)bindElements:(struct __CFSet *)arg0 ;
-(void)dealloc;
-(void)prepareForNumberOfElements:(NSUInteger)arg0 ;
-(void)unbind;
-(void)unprepare;


@end


#endif
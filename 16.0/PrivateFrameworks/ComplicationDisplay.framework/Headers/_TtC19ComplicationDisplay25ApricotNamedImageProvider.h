// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19COMPLICATIONDISPLAY25APRICOTNAMEDIMAGEPROVIDER_H
#define _TTC19COMPLICATIONDISPLAY25APRICOTNAMEDIMAGEPROVIDER_H

@class CLKImageProvider;



@interface _TtC19ComplicationDisplay25ApricotNamedImageProvider : CLKImageProvider {
    ? named;
    ? finalized;
    ? _maxSize;
    ? scale;
    ? weight;
}


@property (nonatomic, readonly) CGSize maxSize;


-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initPrivate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithForegroundAccentImage:(id)arg0 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 bundle:(id)arg1 ;


@end


#endif